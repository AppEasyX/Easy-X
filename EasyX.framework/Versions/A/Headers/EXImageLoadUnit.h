//
//  FImageLoadUnit.h
//  JFImageCacheLoad
//
//  Created by jf4444 on 13-4-11.
//  Copyright (c) 2013年 贾 飞. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EXImageLoadUnit;

@protocol EXimageDownloadUnitDelegate
@required
- (void)imageDidSucess:(EXImageLoadUnit *)unit reslutImg:(UIImage *)img;
- (void)imageDidFail:(EXImageLoadUnit *)unit withError:(NSError *)error;
@end

@interface EXImageLoadUnit : NSOperation {
@private
    NSURLRequest* _request;
    NSURLConnection* _connection;
    NSMutableData* _data;
    NSMutableDictionary *_oprationInfo;
    BOOL _isFinished;
    id<EXimageDownloadUnitDelegate> _imageDownLoadUnitDelegate;
    
}

- (id)initWithURLString:(NSString *)url;

@property (nonatomic, retain ,readonly) NSData *data;
@property (nonatomic, assign) id<EXimageDownloadUnitDelegate> imageDownLoadUnitDelegate;
@property (nonatomic, retain) NSMutableDictionary *oprationInfo;

@end
