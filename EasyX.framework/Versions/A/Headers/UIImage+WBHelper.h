//
//  UIImage+WBHelper.h
//  App58ForIphone
//
//  Created by fenglu on 11-11-17.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (WBHelper)

- (UIImage *)imageByScalingAndCroppingForSize:(CGSize)targetSize;
- (UIImage *)cropImage:(UIImage *)image to:(CGRect)cropRect andScaleTo:(CGSize)size;
- (UIImage *)standardUploadImage;
@end
