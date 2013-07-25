//
//  EXTableSlideItem.h
//  EasyX
//
//  Created by feng lu on 12-11-29.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXTableLinkedItem.h"

@interface EXTableSlideItem : EXTableLinkedItem
{
    NSString*   _title;
    id          _cell;
}

@property(nonatomic, copy)   NSString*   title;
@property(nonatomic, assign) id          cell;

+ (id)itemWithText:(NSString*)text delegate:(id)delegate selector:(SEL)selector;
@end
