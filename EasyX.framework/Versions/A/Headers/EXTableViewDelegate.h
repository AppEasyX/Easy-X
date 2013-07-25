//
//  EXTableViewDelegate.h
//  EasyX
//
//  Created by feng lu on 12-11-9.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EXTableViewController;

@interface EXTableViewDelegate : NSObject <UITableViewDelegate>
{
    EXTableViewController*  _controller;
}

- (id)initWithController:(EXTableViewController*)controller;

@property (nonatomic, readonly) EXTableViewController* controller;

@end
