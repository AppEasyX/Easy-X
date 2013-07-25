//
//  FImageDownIndex.h
//  SunNote
//
//  Created by jf4444 on 12-8-24.
//  Copyright (c) 2012年 __SUN__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EXImageDownIndex : NSObject {
    NSIndexPath *_cellIndexPath;
    int _imgColumnIndex;
}

@property (nonatomic, retain) NSIndexPath *cellIndexPath;
@property (nonatomic, assign) int imgColumnIndex;

@end
