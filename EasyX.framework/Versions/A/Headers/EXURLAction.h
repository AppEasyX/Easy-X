//
//  FURLAction.h
//  EasyX
//
//  Created by feng lu on 12-11-5.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UIView+UICommon.h"

@interface EXURLAction : NSObject
{
    NSString*     _urlPath;
    NSString*     _parentURLPath;
    BOOL          _animated;
    
    id            _query;
    
    CGRect        _sourceRect;
    UIView*       _sourceView;
    FUIViewAnimationTransition _transition;
}

@property (nonatomic, copy)   NSString*     urlPath;
@property (nonatomic, copy)   NSString*     parentURLPath;
@property (nonatomic, assign) BOOL          animated;
@property (nonatomic, retain) id            query;
@property (nonatomic, assign) CGRect        sourceRect;
@property (nonatomic, retain) UIView*       sourceView;
@property (nonatomic, assign) FUIViewAnimationTransition transition;

+ (id)action;


///////////////////////////////////////////////////////////////////////////////////////////////////
+ (id)actionWithURLPath:(NSString*)urlPath;


///////////////////////////////////////////////////////////////////////////////////////////////////
- (id)initWithURLPath:(NSString*)urlPath;


@end
