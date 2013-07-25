//
//  EXTab.h
//  EasyX
//
//  Created by feng lu on 12-11-26.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EXTab : UIButton{
//    UILabel * _badgeLable;      //tab上面的badge显示信息
    NSInteger           _selectNum;
}
@property(nonatomic, assign)NSInteger           selectNum;

@end
