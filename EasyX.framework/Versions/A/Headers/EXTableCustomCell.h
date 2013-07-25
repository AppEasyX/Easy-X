//
//  EXTableDefinitionViewCell.h
//  EasyX
//
//  Created by feng  on 12-11-4.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXTableViewCell.h"

/**
 * EXTableViewController的tableView的cell
 */

@interface EXTableCustomCell : EXTableViewCell {
@private
    id          _definitionData;
}

/**
 * definitionData为cell对应的数据
 */
@property(nonatomic, retain) id          definitionData;

/**
 *	@brief	cell传递数据，及在此方法给cell负值
 *
 *	@param 	tableView 	对应的tableView
 *	@param 	indexPath 	标示是哪一个cell
 *	@param 	data 	cell显示对应的model
 */
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath cellForData:(id)data;
@end
