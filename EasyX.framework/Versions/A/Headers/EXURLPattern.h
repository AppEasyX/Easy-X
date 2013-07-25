//
//  FURLPattern.h
//  EasyX
//
//  Created by feng lu on 12-11-5.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EXURLPattern : NSObject
{
    NSString*             _URL;
    SEL                   _selector;
}

@property (nonatomic, copy)     NSString* URL;
@property (nonatomic)           SEL       selector;
@end
