//
//  ImageLoaderCell.m
//  EasyXSamples
//
//  Created by jf4444 on 13-7-2.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "ImageLoaderCell.h"
#import "ImageLoaderModel.h"

#define GOODS_FACE_ORIGN_X  (3.0f)
#define GOODS_FACE_ORIGN_Y  (0.0f)
#define GOODS_FACE_SIZE_W   (313.0f)
#define GOODS_FACE_SIZE_H   (230.0f)


@interface  ImageLoaderCell()
- (void)prepareSubView;
- (void)prepareSubViewFrames;
@end

@implementation ImageLoaderCell

@synthesize goodsFaceImageView = _goodsFaceImageView;


- (void)dealloc {
    EX_RELEASE_SAFELY(_goodsFaceImageView);
    
    [super dealloc];
}


- (id)initWithStyle:(UITableViewCellStyle)style
    reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
		self.accessoryType = UITableViewCellAccessoryNone;
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        
        self.backgroundColor = [UIColor clearColor];
        self.contentView.backgroundColor = [UIColor clearColor];
        
        self.textLabel.backgroundColor = [UIColor clearColor];
		self.textLabel.opaque = NO;
		self.textLabel.textColor = [UIColor blackColor];
		self.textLabel.highlightedTextColor = [UIColor whiteColor];
		self.textLabel.font = [UIFont boldSystemFontOfSize:16];
		
		self.detailTextLabel.backgroundColor = [UIColor clearColor];
		self.detailTextLabel.opaque = NO;
		self.detailTextLabel.textColor = [UIColor clearColor];
		self.detailTextLabel.highlightedTextColor = [UIColor whiteColor];
		self.detailTextLabel.font = [UIFont systemFontOfSize:12];
        
        [self prepareSubView];
        [self prepareSubViewFrames];
	}
    
	return self;
}


#pragma mark -
#pragma mark - PREPARE_SUB_VIEW
- (void)prepareSubView {
    _goodsFaceImageView = [[UIImageView alloc] init];
    _goodsFaceImageView.backgroundColor = [UIColor clearColor];
    
    [self.contentView addSubview:_goodsFaceImageView];
}


#pragma mark -
#pragma mark - PREPARE_SUB_VIEW_FRAME
- (void)prepareSubViewFrames {
    _goodsFaceImageView.frame = CGRectMake(GOODS_FACE_ORIGN_X, GOODS_FACE_ORIGN_Y, GOODS_FACE_SIZE_W, GOODS_FACE_SIZE_H);
}


- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath cellForData:(id)data {
    [super tableView:tableView cellForRowAtIndexPath:indexPath cellForData:data];
    
    ImageLoaderModel *model = data;
    
    id idImg = [model.bufferTagrtDict objectForKey:model.imageUrlString];
    if ([idImg isKindOfClass:[UIImage class]]) {
        self.goodsFaceImageView.image = idImg;
    }
    else {
        self.goodsFaceImageView.image = nil;
    }
}


+ (CGFloat)tableView:(UITableView*)tableView rowHeightForObject:(id)object heightForRowAtIndexPath:(NSIndexPath*)indexPath {
    float cellHeight = 0.0f;
    cellHeight = 235.0f;
    return cellHeight;
}

@end
