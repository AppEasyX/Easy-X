//
//  ViewController2.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "ImageLoderController.h"
#import "EXTableCustomItem.h"
#import "ImageLoaderModel.h"
#import "ImageLoaderCell.h"

#define BUFFER_DICT_CAPCITY (10)

@interface ImageLoderController ()
@property (nonatomic, copy) NSString *targrtGroupRandomKey;
@property (nonatomic, retain) NSMutableArray *unitAllUrls;
@property (nonatomic, retain) NSDictionary *unitDict;

- (void)addImageUrls;
@end

@implementation ImageLoderController

@synthesize targrtGroupRandomKey = _targrtGroupRandomKey;
@synthesize unitAllUrls = _unitAllUrls;
@synthesize unitDict = _unitDict;


#pragma mark -
#pragma mark - LIFE_CIRCLE
- (void)dealloc {
    DLog(@"");
    [[EXImageBufferUtility shareImageBufferUtilty] popStackWithImageBufferUnitGroupKey:_targrtGroupRandomKey];
    
    EX_RELEASE_SAFELY(_targrtGroupRandomKey);
    EX_RELEASE_SAFELY(_unitAllUrls);
    EX_RELEASE_SAFELY(_unitDict);
    
    [super dealloc];
}


- (id)init {
    if (self = [super init]) {
        // cutom init
        _variableHeightRows = YES;
        
        _unitAllUrls = [[NSMutableArray alloc] init];
        _unitDict = [[NSMutableDictionary alloc] init];
        
        [self addImageUrls];
        [self loadTableData];
    }
    return self;
}


- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
}


- (void)loadView {
    [super loadView];
}


- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.exNavigationItem.exTitle = @"Image Loder";
}


- (void)viewDidUnload {
    [super viewDidUnload];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}





#pragma mark - 
#pragma mark - ADD_URELS
- (void)addImageUrls {
    [_unitAllUrls addObject:@"http://img04.shangpincdn.com/e/s/12/12/07/20121207180947873883-620-460.jpg"];
    [_unitAllUrls addObject:@"http://img02.shangpincdn.com/e/s/12/12/08/20121208100921294841-620-460.jpg"];
    [_unitAllUrls addObject:@"http://img05.shangpincdn.com/e/s/12/12/08/20121208093404337014-620-460.jpg"];
    [_unitAllUrls addObject:@"http://img02.shangpincdn.com/e/s/12/12/07/20121207180803076601-620-460.jpg"];
    [_unitAllUrls addObject:@"http://img02.shangpincdn.com/e/s/12/12/09/20121209124837752782-620-460.jpg"];
}


#pragma mark -
#pragma mark - TEST_LOAD_TABLE_DATA
- (void)loadTableData {
    // model1 init with unit1
    EXImageBufferUnitModel *unitModel1 = [[[EXImageBufferUnitModel alloc] init] autorelease];
    unitModel1.unitTimerInterval = 3.0f;
    unitModel1.dataImgUrls = _unitAllUrls;
    [[EXImageBufferUtility shareImageBufferUtilty] pushStackWithImageBufferUnitModel:unitModel1 withProctolTarget:self];
    [EXImageBufferUtility shareImageBufferUtilty].statusBarLoaderAnimationType = EXStatusBarLoaderAnimationType_Circle;
    
    [self testCreateModel];
}


- (void)testCreateModel {
    EXSectionedDataSource *testSectionedDataSource = [EXSectionedDataSource dataSourceWithObjects];
    
    NSMutableArray* temp = [NSMutableArray array];
    
    for (NSString *imageUrlStr in _unitAllUrls) {
        ImageLoaderModel *tempModel = [[ImageLoaderModel alloc] init];
        tempModel.bufferTagrtDict = _unitDict;
        tempModel.imageUrlString = imageUrlStr;
        
        EXTableCustomItem *cellItem = [EXTableCustomItem itemWithCell:[ImageLoaderCell class] Model:tempModel URL:nil];
        [tempModel release];
        [temp addObject:cellItem];
    }
    
    [testSectionedDataSource addItem:temp];
    self.dataSource = testSectionedDataSource;
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
    self.targrtGroupRandomKey = bufferUnitGroupDataModel.unitRefreshDataUnitGroupRandomKey;
    [_unitDict setValuesForKeysWithDictionary:bufferUnitGroupDataModel.dataDict];
    
    [self reloadData];
}


#pragma mark -
#pragma mark - SHOW_SLIDE_VIEW
- (void)showSlideView {
    // 打开slideView
    [[self sildeController] showLeftViewController:nil];
}

@end
