//
//  TableCustomController.m
//  EasyXSamples
//
//  Created by feng lu on 13-7-17.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "TableCustomController.h"
#import "CustomCell.h"
#import "CustomModel.h"


@interface TableCustomController ()

@end

@implementation TableCustomController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.exNavigationItem.exTitle = @"Custom";
}

- (void)createModel {
    //DLog打印信息已经在控制器和debug模式中
    DLog(@"");
    
    EXSectionedDataSource* sectionedDataSource = [EXSectionedDataSource dataSourceWithObjects];
    NSMutableArray* tempDataArr = [[NSMutableArray alloc] init];
    
    CustomModel* model = [[CustomModel alloc] init];
    model.text1 = @"Do not, for one repulse, forgo the purpose that you resolved to effort. ";
    model.text2 = @"The man who has made up his mind to win will never say \" Impossible\". ";
    model.text3 = @"Miracles sometimes occur, but one has to work terribly for them.";
    for (int i = 0; i < 10; i++) {
        [tempDataArr addObject:[EXTableCustomItem itemWithCell:[CustomCell class] Model:model URL:nil]];
    }
    
    [sectionedDataSource addItem:tempDataArr];
    [tempDataArr release];
    [model release];
    self.dataSource = sectionedDataSource;
}
@end
