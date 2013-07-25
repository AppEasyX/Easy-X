//
//  EXTableViewCellDelegate.h
//  EasyX
//
//  Created by feng  on 12-11-4.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EXTableDefinitionViewCellModel.h"

@protocol EXTableDefinitionViewCellDelegate <NSObject>
@required
- (void)EXTableDefinitionModel:(EXTableDefinitionViewCellModel*)DModel;
@end
