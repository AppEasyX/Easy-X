//
//  EXImageBufferUnitGroupDataSource.h
//  SunNote
//
//  Created by jf4444 on 13-4-2.
//
//

#import <Foundation/Foundation.h>
#import "EXImageBufferUnit.h"
#import "EXImageBufferUnitGroupDataSourceModel.h"

@protocol EXImageBufferUnitGroupDataSource <NSObject>
@required
- (EXImageBufferUnitGroupDataSourceModel *)dataWithUnitRandomKey:(NSString *)randomKey;
@end