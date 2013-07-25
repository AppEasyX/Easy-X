//
//  FGuideTagModel.h
//  
//
//  Created by jf4444 on 12-10-24.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
	EXGuideDirectionLeft = 0,
    EXGuideDirectionRight = 1,
    EXGuideDirectionUpward = 2,
    EXGuideDirectionDownward = 3
} EXGuideDirection;

@interface EXGuideTagModel : NSObject {
    // 开始位置
    CGPoint _startPoint;
    // 结束位置
    CGPoint _endPoint;
    // 方向
    EXGuideDirection _direction;
    // 图片
    UIImage *_guideImage;
    // 图片大小
    CGSize _imageSize;
    // 动画速率
    float _animationDiuation;
}

@property (nonatomic, assign) CGPoint startPoint;
@property (nonatomic, assign) CGPoint endPoint;
@property (nonatomic, assign) EXGuideDirection direction;
@property (nonatomic, retain) UIImage *guideImage;
@property (nonatomic, assign) CGSize imageSize;
@property (nonatomic, assign) float animationDiuation;

- (id)init;

@end
