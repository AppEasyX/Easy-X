//
//  FStyledTextParser.h
//  EasyX
//
//  Created by feng lu on 13-2-21.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EXStyledNode;
@class FStyledElement;

@interface EXStyledTextParser : NSObject <NSXMLParserDelegate> 
{
    EXStyledNode*     _rootNode;
    FStyledElement*  _topElement;
    EXStyledNode*     _lastNode;
    
    NSMutableString*  _chars;
    NSMutableArray*   _stack;
}

@property (nonatomic, retain) EXStyledNode* rootNode;


- (void)parseXHTML:(NSString*)html;
- (void)parseText:(NSString*)string;
@end
