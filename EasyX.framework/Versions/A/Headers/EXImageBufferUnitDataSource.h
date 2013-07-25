//
//  FImageBufferUnitDataSource.h
//  SunNote
//
//  Created by jf4444 on 13-4-2.
//
//

#import <Foundation/Foundation.h>

@class EXImageBufferUnit;
@protocol EXImageBufferUnitDataSource <NSObject>
@required
- (NSArray *)dataWithImageBuffer:(EXImageBufferUnit *)buffer unitRandomKey:(NSString *)randomKey;
@end