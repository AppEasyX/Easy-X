//
//  ViewController6.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "NavBarController.h"
#import "TablePushCell.h"

@interface NavBarController ()

@end

@implementation NavBarController

#pragma mark -
#pragma mark - CONTROLLER_LIFE_CIRCLE
- (void)dealloc {
    
    [super dealloc];
}


- (id)init {
    self = [super init];
    if (self) {
        DLog(@"");
        // custom init
        // 若想改变navBar的默认高度,只许设置此值
        self.exNavigationBarHeight = 125.0f;
    }
    
    return self;
}


- (void)loadView {
    [super loadView];
}


- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.exNavigationItem.exTitle = @"firstStage";
    
    // 改变titleLabel的字体颜色,默认为白色
    self.exNavigationItem.exTitleColor = [UIColor whiteColor];
    
    // 改变返回按钮的字体颜色,默认为白色
    self.exNavigationItem.exDefalutBacButtonTitleColor = [UIColor whiteColor];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


- (void)viewDidUnload {
    [super viewDidUnload];
}


- (void)createModel {
    EXSectionedDataSource* sectionedDataSource = [EXSectionedDataSource dataSourceWithObjects];
    NSMutableArray* tempDataArr = [[NSMutableArray alloc] init];
    
    
    for (int i = 0; i < 10; i++) {
        NSString* text = [NSString stringWithFormat:@"Table Push Row %i", i];
        [tempDataArr addObject:[EXTableCustomItem itemWithCell:[TablePushCell class] Model:text URL:nil]];
    }
    
    [sectionedDataSource addItem:tempDataArr];
    [tempDataArr release];
    self.dataSource = sectionedDataSource;
}

- (void)tableView:(UITableView*)tableView didSelectRowAtIndexPath:(NSIndexPath*)indexPath {
    EXOpenURL(@"NavigateionController");
}

@end
