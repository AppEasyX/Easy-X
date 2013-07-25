//
//  EXTableLinkedItem.h
//  EasyX
//
//  Created by feng  on 12-11-4.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXTableItem.h"

@interface EXTableLinkedItem : EXTableItem
{
    NSString* _URL;
    NSString* _accessoryURL;
    
    id        _delegate;
    SEL       _selector;
}

@property (nonatomic, copy) 	NSString* URL;
@property (nonatomic, copy)   NSString* accessoryURL;
@property (nonatomic, assign) id        delegate;
@property (nonatomic, assign) SEL       selector;

@end
