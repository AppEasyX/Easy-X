//
//  FGuideTagView.h
//  
//
//  Created by jf4444 on 12-10-24.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXGuideTagModel.h"

@interface EXGuideTagView : UIImageView {
    EXGuideTagModel *_model;
    BOOL _isNeedStopAnimation;
}

@property (nonatomic, retain) EXGuideTagModel *model;
@property (nonatomic, assign) BOOL isNeedStopAnimation;

- (void)stopAnimation;

@end
