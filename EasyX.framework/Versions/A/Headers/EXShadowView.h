//
//  EXShadowView.h
//  Four20
//
//  Created by jf4444 on 13-7-6.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EXView.h"

@interface EXShadowView : EXView { 
@private
    NSArray *_leftColorArr;
    NSArray *_rightColorArr;
}

@property (nonatomic, retain) NSArray *leftColorArr;
@property (nonatomic, retain) NSArray *rightColorArr;

- (void)showLeftShadow;
- (void)showRightShadow;

@end
