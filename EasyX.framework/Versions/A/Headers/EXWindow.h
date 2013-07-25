//
//  EXWindow.h
//  EasyX
//
//  Created by feng lu on 13-5-28.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EXDeviceDebugSlideView.h"

@interface EXWindow : UIWindow <UIGestureRecognizerDelegate,SPDeviceDebugViewTapDelegate> {
@private
    //debug版本时的屏幕响应
    
    UITapGestureRecognizer* _exDoubleTapGesture;
    UITapGestureRecognizer* _exRecordTapGesture;
    
    CGPoint                 _exTouchPoint;
    
    NSTimer*                _exTimer;
    BOOL                    _exSaveData;
    
    EXDeviceDebugSlideView *_slideView;
}


@end

