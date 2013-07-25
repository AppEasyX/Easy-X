//
//  FURLNavigatorPattern.h
//  EasyX
//
//  Created by feng lu on 12-11-5.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXURLPattern.h"
#import "EXNavigationModel.h"

@interface EXURLNavigatorPattern : EXURLPattern
{
    Class             _targetClass;
    id                _targetObject;
    EXNavigationMode  _navigationMode;
    NSString*         _parentURL;
    NSInteger         _transition;
}
@property (nonatomic, assign)   Class             targetClass;
@property (nonatomic, assign)   id                targetObject;
@property (nonatomic, assign)   EXNavigationMode  navigationMode;
@property (nonatomic, copy)     NSString*         parentURL;
@property (nonatomic, assign)   NSInteger         transition;

- (id)initWithTarget:(id)target;
- (id)initWithTarget:(id)target mode:(EXNavigationMode)navigationMode;

- (id)createObjectFromURL: (NSString*)URL query: (NSDictionary*)query;
- (BOOL)matchURL:(NSString*)URL;
@end
