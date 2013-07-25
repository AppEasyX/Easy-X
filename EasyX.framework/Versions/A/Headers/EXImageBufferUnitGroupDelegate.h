//
//  EXImageBufferUnitGroupDelegate.h
//  SunNote
//
//  Created by jf4444 on 13-4-2.
//
//

#import <Foundation/Foundation.h>
#import "EXImageBufferUnitGroupRefreshDataModel.h"

@protocol EXImageBufferUnitGroupDelegate <NSObject>
@required
- (void)refreshImageBufferWithUnitGropRefreshData:(EXImageBufferUnitGroupRefreshDataModel *)bufferUnitGroupDataModel;
- (void)refreshImageBufferWithUnitGropWithoutDelayRefreshData:(EXImageBufferUnitGroupRefreshDataModel *)bufferUnitGroupDataModel;
@end