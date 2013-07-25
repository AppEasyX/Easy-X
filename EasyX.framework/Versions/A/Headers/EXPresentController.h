//
//  EXPresentController.h
//  Four20
//
//  Created by feng lu on 13-7-22.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EXModelViewController.h"

@interface EXPresentController : EXModelViewController
{
    NSMutableArray*                 _controllers;
}

+ (id)present;

- (void)presentModalViewURL:(NSString*)URL animated:(BOOL)animated;
@end
