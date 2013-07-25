//
//  FURLMap.h
//  EasyX
//
//  Created by feng lu on 12-11-5.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

/**
 */


#import <Foundation/Foundation.h>
#define RootController  (@"RootController")


/**
 *  重要的类型，为框架提供解析服务。
 *  注册控制器，开发者根据业务需求，向注册器注入控制器类型[testController class]，并且为这个类一个对应的代号，如此
 *  框架将为你的程序准备好这个类型，并且可以随时获取和push这个类型
 *
 *  建议开发者不要用重复的代号来标记类型，这样或导致混淆
 */

@class EXURLNavigatorPattern;
@interface EXRegistrationToole : NSObject
{
    NSMutableArray* _objectPatterns;
    NSMutableDictionary* _objectMappings;
}

/**
 *  设置一个跟控制器
 */
- (void)setRootController:(id)target;

/**
 *  增加一个代号和一个控制器类型
 */
- (void)from:(NSString*)URL toViewController:(id)target;


/**
 *  增加一个代号和一个控制器类型
 */
- (void)from:(NSString*)URL parent:(NSString*)parentURL
toViewController:(id)target selector:(SEL)selector transition:(NSInteger)transition;

@end
