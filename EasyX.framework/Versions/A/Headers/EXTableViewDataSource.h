//
//  EXTableViewDataSource.h
//  EasyX
//
//  Created by feng  on 12-11-8.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol EXTableViewDataSource <UITableViewDataSource>
- (id)tableView:(UITableView*)tableView objectForRowAtIndexPath:(NSIndexPath*)indexPath;

- (id)tableView:(UITableView*)tableView objectForSections:(NSInteger)section;

- (Class)tableView:(UITableView*)tableView cellClassForObject:(id)object;

@end
@interface EXTableViewDataSource : NSObject <EXTableViewDataSource>

@end
