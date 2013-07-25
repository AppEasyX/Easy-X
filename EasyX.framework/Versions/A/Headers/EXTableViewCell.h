//
//  EXTableViewCell.h
//  EasyX
//
//  Created by feng  on 12-11-4.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EXTableViewController;

@interface EXTableViewCell : UITableViewCell
{
    EXTableViewController* _controller;
}

@property(nonatomic, assign) EXTableViewController* controller;


@end
