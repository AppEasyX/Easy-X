//
//  FSectionedDataSource.h
//  EasyX
//
//  Created by feng  on 12-11-10.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

/**
 * 为继承于EXTableViewController的controller的table创建tableView数据的model，为section的model
 */

#import "EXTableViewDataSource.h"

@interface EXSectionedDataSource : EXTableViewDataSource {
@private
    NSMutableArray* _sections;
    NSMutableArray* _items;
}

/**
 * items存储的为没个section对应的所有cell的item，为一个数组
 */
@property (nonatomic, retain) NSMutableArray* items;

/**
 * sections存储的为所有section的title
 */
@property (nonatomic, retain) NSMutableArray* sections;

/**
 *	@brief	快速初始化一个EXSectionedDataSource
 */
+ (EXSectionedDataSource*)dataSourceWithObjects;

/**
 *	@brief	添加一个section的rows度应的items
 *  @param 	object 为一个数组,存储的为没个section对应的所有cell的item
 */
- (void)addItem:(id)object;

/**
 *	@brief	添加section的rows度应的items
 *  @param 	object 为一个数组,存储的为没个section对应的所有cell的item
 */
- (void)addItems:(id)object,...;

/**
 *	@brief	添加每个section的title
 *  @param 	object 为title
 */
- (void)addSections:(id)object,...;
@end
