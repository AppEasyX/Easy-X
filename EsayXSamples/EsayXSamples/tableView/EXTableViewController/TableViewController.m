//
//  ViewController1.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "TableViewController.h"
#import "SampleCellModel.h"
#import "SampleCell.h"

@interface TableViewController ()
- (void)creadTableData;

@property (nonatomic, retain) NSIndexPath *selectIndexPath;
@end

@implementation TableViewController

@synthesize selectIndexPath = _selectIndexPath;


#pragma mark -
#pragma mark - CONTROLLER_LIFE_CIRCLE
- (void)dealloc {
    DLog(@"");
    EX_RELEASE_SAFELY(_selectIndexPath);
    
    [super dealloc];
}


- (id)init {
    self = [super init];
    if (self) {
        // custom init
        
        // 创建table的数据 
        [self creadTableData];
    }
    
    return self;
}


- (void)loadView {
    [super loadView];
}


- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.exNavigationItem.exTitle = @"tableView";
    
    // 自定义cell的高，必须设置此属性，否则cell的高不可变
    _variableHeightRows = YES;
}


- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self.sildeController slideGestureValid:YES];
    [_tableView deselectRowAtIndexPath:_selectIndexPath animated:YES];
}


- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    
    [self.sildeController slideGestureValid:NO];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


- (void)viewDidUnload {
    [super viewDidUnload];
}


#pragma mark -
#pragma mark - OTHER_SEL
- (void)creadTableData {
    EXSectionedDataSource* sectionedDataSource = [EXSectionedDataSource dataSourceWithObjects];
    
    // section 的循环
    for (int i = 0; i < 3; i ++) {
        NSMutableArray* tempDataArr = [[NSMutableArray alloc] init];
        
        // row的循环
        for (int j = 0; j < 10; j ++) {
            NSIndexPath *tempTarIndexPath = [NSIndexPath indexPathForRow:j inSection:i];
            
            SampleCellModel *model = [[SampleCellModel alloc] init];
            model.dataIndexPath = tempTarIndexPath;
            model.testSampleCellData = @"MVC cell的data";
            
            // URL:@"ViewController7" 可以为nil
            [tempDataArr addObject:[EXTableCustomItem itemWithCell:[SampleCell class] Model:model URL:nil]];
            [model release];
        }
        
        [sectionedDataSource addItem:tempDataArr];
        [tempDataArr release];
    }
    
    [sectionedDataSource addSections:@"section0", @"section1", @"section2", nil];
    
    self.dataSource = sectionedDataSource;
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    // 重写此方法可以自定义push向哪个controller
    
    self.selectIndexPath = indexPath;
}


#pragma mark -
#pragma mark - SHOW_SLIDE_VIEW
- (void)showSlideView {
    // 打开slideView
    [[self sildeController] showLeftViewController:nil];
}


#pragma mark -
#pragma mark - SCROLL_DELEGATE
- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
    [super scrollViewDidScroll:scrollView];
    
    [self.sildeController slideGestureValid:NO];
}


- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView {
    [super scrollViewDidEndDecelerating:scrollView];
    
    [self.sildeController slideGestureValid:YES];
    
    NSLog(@"stopScroll");
}

@end
