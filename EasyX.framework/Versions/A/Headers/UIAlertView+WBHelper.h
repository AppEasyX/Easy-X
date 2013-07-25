//
//  UIAlertView+WBHelper.h
//  App58ForIphone
//
//  Created by fenglu on 11-10-24.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertView (WBHelper)

+ (void)alertWithMsg:(NSString *)msg 
               title:(NSString *)title 
            delegate:(id)delegate 
				 tag:(int)aTag
           btnTitles:(NSString *)btnTitles, ... NS_REQUIRES_NIL_TERMINATION;
@end
