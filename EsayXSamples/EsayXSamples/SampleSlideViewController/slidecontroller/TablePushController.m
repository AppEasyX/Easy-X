//
//  TablePushController.m
//  EasyXSamples
//
//  Created by feng lu on 13-7-17.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "TablePushController.h"
#import "TablePushCell.h"

@interface TablePushController ()

@end

@implementation TablePushController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    self.exNavigationItem.exTitle = @"Table Push";
}

- (void)createModel {
    EXSectionedDataSource* sectionedDataSource = [EXSectionedDataSource dataSourceWithObjects];
    NSMutableArray* tempDataArr = [[NSMutableArray alloc] init];
    
    
    for (int i = 0; i < 10; i++) {
        NSString* text = [NSString stringWithFormat:@"Table Push Row %i", i];
        [tempDataArr addObject:[EXTableCustomItem itemWithCell:[TablePushCell class] Model:text URL:@"TableCustomController"]];
    }
    
    [sectionedDataSource addItem:tempDataArr];
    [tempDataArr release];
    self.dataSource = sectionedDataSource;
}


- (void)tableView:(UITableView*)tableView didSelectRowAtIndexPath:(NSIndexPath*)indexPath {
    DLog(@"这里返回当前触发的TableCell，它的Path是row = %i, section = %i", indexPath.row, indexPath.section);
}

@end
