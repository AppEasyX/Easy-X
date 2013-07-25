//
//  EXTableCustomItem.h
//  EasyX
//
//  Created by feng  on 12-11-4.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXTableLinkedItem.h"
#import "EXTableViewCell.h"
#import "EXTableDefinitionViewCellModel.h"

@interface EXTableCustomItem : EXTableLinkedItem
{
    id                          _model;
    id                          _definitionCell;
    CGFloat                     _cellHeight;
}

@property(nonatomic, retain) id                          model;
@property(nonatomic, retain) id                          definitionCell;
@property(nonatomic)         CGFloat                     cellHeight;

+ (id)itemWithCell:(id)cell Model:(id)model URL:(NSString*)URL;
+ (id)itemWithCell:(id)cell Model:(id)model delegate:(id)delegate selector:(SEL)selector;
@end
