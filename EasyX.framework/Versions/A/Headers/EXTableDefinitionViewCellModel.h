//
//  EXTableDefinitionViewCellModel.h
//  EasyX
//
//  Created by feng  on 12-11-4.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

/**
 * cell对应的数据model
 */

#import "EXModel.h"
#import "EXTableCustomCell.h"

@interface EXTableDefinitionViewCellModel : EXModel {
@private
    id                          _model;
    EXTableCustomCell*   _definitionCell;
}

/**
 * model为供cell显示数据实体
 */
@property(nonatomic, retain) id                          model;

/**
 * definitionCell为model对应的cell
 */
@property(nonatomic, retain) EXTableCustomCell*   definitionCell;

@end
