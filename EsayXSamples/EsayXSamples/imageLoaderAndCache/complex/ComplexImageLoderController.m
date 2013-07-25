//
//  ViewController3.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "ComplexImageLoderController.h"
#import "EXTableCustomItem.h"
#import "EXSampleImgLoadCellModel.h"
#import "EXTableView.h"
#import "EXSampleActivityModel.h"
#import "EXSampleActivityCell.h"
#import "EXSampleMianPageOprator.h"
#import "JSONKit.h"
#import "EXSampleImageLoadImageView.h"

#define BUFFER_DICT_CAPCITY (10)

@interface ComplexImageLoderController ()
@property (nonatomic, retain) EXSampleMianPageOprator *mainPageOprator;

@property (nonatomic, copy) NSString *targrtGroupRandomKey;
@property (nonatomic, copy) NSString *unitRandmKey;
@property (nonatomic, retain) NSMutableArray *unitAllUrls;
@property (nonatomic, retain) NSDictionary *unitDict;

- (void)refreshDisplayCell;
@end

@implementation ComplexImageLoderController

@synthesize mainPageOprator = _mainPageOprator;

@synthesize targrtGroupRandomKey = _targrtGroupRandomKey;
@synthesize unitRandmKey = _unitRandmKey;
@synthesize unitAllUrls = _unitAllUrls;
@synthesize unitDict = _unitDict;


#pragma mark -
#pragma mark - LIFE_CIRCLE
- (void)dealloc {
    DLog(@"");
    [[EXImageBufferUtility shareImageBufferUtilty] popStackWithImageBufferUnitGroupKey:_targrtGroupRandomKey];
    
    EX_RELEASE_SAFELY(_mainPageOprator);
    EX_RELEASE_SAFELY(_targrtGroupRandomKey);
    EX_RELEASE_SAFELY(_unitRandmKey);
    EX_RELEASE_SAFELY(_unitAllUrls);
    EX_RELEASE_SAFELY(_unitDict);
    
    [super dealloc];
}


- (id)init {
    if (self = [super init]) {
        // cutom init
        _mainPageOprator = [[EXSampleMianPageOprator alloc] init];
        
        _variableHeightRows = YES;
        
        _unitAllUrls = [[NSMutableArray alloc] init];
        _unitDict = [[NSMutableDictionary alloc] init];
    }
    return self;
}


- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    
    if ([_unitAllUrls count] == 0) {
        [NSObject cancelPreviousPerformRequestsWithTarget:self selector:@selector(loadTableData) object:nil];
        [self performSelector:@selector(loadTableData) withObject:nil afterDelay:3.0f];
        self.tableView.hidden = YES;
        [self showTipProgress:@"正在加载数据..." blackBg:YES];
    }
}


- (void)loadView {
    [super loadView];
}


- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.exNavigationItem.exTitle = @"Image Loder";
    self.exNavigationItem.exLeftBarButtonView = nil;
}


- (void)viewDidUnload {
    [super viewDidUnload];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


#pragma mark -
#pragma mark - TEST_LOAD_TABLE_DATA
- (void)loadTableData {
    self.tableView.hidden = NO;
    [self dismissTip];
    
    NSError *error;
    NSString *pathStr = [[NSBundle mainBundle]pathForResource:@"mainpage" ofType:@"json"];
    NSString *textContents = [NSString stringWithContentsOfFile:pathStr encoding:NSUTF8StringEncoding error:&error];
    
    NSDictionary *responseDict = [textContents objectFromJSONString];
    
    [_mainPageOprator fillModelWithResponseDict:responseDict];
    
    
    NSArray *activityArr = _mainPageOprator.activityList;
    
    for (int i = 0; i < [activityArr count]; i ++) {
        NSArray *subArr = [activityArr objectAtIndex:i];
        for (EXSampleActivityModel *actModel in subArr) {
            [_unitAllUrls addObject:actModel.pic];
        }
    }
    
    // model1 init with unit1
    EXImageBufferUnitModel *unitModel1 = [[[EXImageBufferUnitModel alloc] init] autorelease];
    self.unitRandmKey = unitModel1.randomKey;
    unitModel1.unitTimerInterval = 3.0f;
    unitModel1.dataImgUrls = _unitAllUrls;
    self.targrtGroupRandomKey = [[EXImageBufferUtility shareImageBufferUtilty] pushStackWithImageBufferUnitModel:unitModel1 withProctolTarget:self];
    [EXImageBufferUtility shareImageBufferUtilty].statusBarLoaderAnimationType = EXStatusBarLoaderAnimationType_Circle;
    
    [self testCreateModel];
    [self reloadData];
}

////////////////////////////////////////////////
- (void)testCreateModel {
    EXSectionedDataSource *testSectionedDataSource = [EXSectionedDataSource dataSourceWithObjects];
    
    NSArray *activityArr = _mainPageOprator.activityList;
    
    
    for (int i = 0; i < [activityArr count]; i ++) {
        NSArray *subArr = [activityArr objectAtIndex:i];
        NSMutableArray* tempArr1 = [[NSMutableArray alloc] init];
        for (EXSampleActivityModel *actModel in subArr) {
            EXSampleImgLoadCellModel *model0 = [[EXSampleImgLoadCellModel alloc] init];
            model0.bufferTagrtDict = _unitDict;
            model0.acModel = actModel;
            
            [tempArr1 addObject:[EXTableCustomItem itemWithCell:[EXSampleActivityCell class] Model:model0 URL:nil]];
            
            [model0 release];
        }
        
        [testSectionedDataSource addItem:tempArr1];
        [tempArr1 release];
    }
    
    self.dataSource = testSectionedDataSource;
}


- (UIView*)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section {
    UIView *headView = [[[UIView alloc] initWithFrame:CGRectMake(0, 0, 320, 20)] autorelease];
    headView.backgroundColor = [UIColor blackColor];
    headView.alpha = 0.8f;
    
    UILabel *textLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 320, 20)];
    textLabel.textColor = [UIColor whiteColor];
    textLabel.backgroundColor = [UIColor clearColor];
    textLabel.font = [UIFont systemFontOfSize:13.0f];
    textLabel.text = [NSString stringWithFormat:@"section:%d",section];
    [headView addSubview:textLabel];
    [textLabel release];
    
    return headView;
}


- (CGFloat)tableView:(UITableView*)tableView heightForHeaderInSection:(NSInteger)section {
    return 20.0f;
}


- (id)didSelectRowAtIndexPath:(NSIndexPath*)indexPath {
    return nil;
}


#pragma mark -
#pragma mark - DELEGATE_DATASOURCE
- (void)refreshImageBufferWithUnitGropRefreshData:(EXImageBufferUnitGroupRefreshDataModel *)bufferUnitGroupDataModel {
    if ([bufferUnitGroupDataModel.unitRefreshDataUnitRandomKey isEqualToString:_unitRandmKey]) {
        if (bufferUnitGroupDataModel.unitAllImgLoadDone) {
            EXImageBufferUtility *unity = [EXImageBufferUtility shareImageBufferUtilty];
            EXImageBufferUnitGroupModel *groupModel = [unity unitGroupRandomKey:_targrtGroupRandomKey];
            EXImageBufferUnitGroup *group = groupModel.bufferUnitGroup;
            [group pauseWithUnitRandomKey:_unitRandmKey];
        }
        
        [_unitDict setValuesForKeysWithDictionary:bufferUnitGroupDataModel.dataDict];
        
        [self refreshDisplayCell];
    }
}


- (void)refreshDisplayCell {
    NSArray *visibleIndexs = [self.tableView indexPathsForVisibleRows];
    for (NSIndexPath *vIndexPath in visibleIndexs) {
        EXSampleActivityCell *cell = (EXSampleActivityCell *)[self.tableView cellForRowAtIndexPath:vIndexPath];
        
        if (cell.goodsFaceImageView.image == nil) {
            NSString *imageKey = cell.goodsFaceImageView.imageKey;
            if ([[_unitDict objectForKey:imageKey] isKindOfClass:[UIImage class]]) {
                cell.goodsFaceImageView.image = [_unitDict objectForKey:imageKey];
            }
        }
    }
}


#pragma mark -
#pragma mark - SHOW_SLIDE_VIEW
- (void)showSlideView {
    // 打开slideView
    [[self sildeController] showLeftViewController:nil];
}

@end
