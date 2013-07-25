//
//  FStyledNode.h
//  EasyX
//
//  Created by feng lu on 13-2-21.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EXStyledNode : NSObject
{
    EXStyledNode* _nextSibling;
    EXStyledNode* _parentNode;
}
@property (nonatomic, retain)   EXStyledNode* nextSibling;
@property (nonatomic, assign)   EXStyledNode* parentNode;

- (id)initWithNextSibling:(EXStyledNode*)nextSibling;
@end
