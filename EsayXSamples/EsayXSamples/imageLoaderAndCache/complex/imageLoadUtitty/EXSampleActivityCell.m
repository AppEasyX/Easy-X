//
//  EXSampleActivityCell.m
//  EsayXSamples
//
//  Created by jf4444 on 12-8-31.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXSampleActivityCell.h"
#import "EXSampleImgLoadCellModel.h"
#import <QuartzCore/QuartzCore.h>
#import "EXSampleImageLoadImageView.h"

#define CELL_SIZE_W     (320.0f)
#define CELL_SIZE_H     (278.0f)

#define GOODS_FACE_ORIGN_X  (3.0f)
#define GOODS_FACE_ORIGN_Y  (0.0f)
#define GOODS_FACE_SIZE_W   (313.0f)
#define GOODS_FACE_SIZE_H   (230.0f)

#define BRAND_LABEL_ORIGN_X (GOODS_FACE_ORIGN_X + 20.0f)
#define BRAND_LABEL_ORIGN_Y (3.0f)
#define BRAND_LABEL_SIZE_W  (GOODS_FACE_SIZE_W - 40.0f)
#define BRAND_LABEL_SIZE_H  (20.0f)

#define T0T2LabelFont     (14.0f)
#define T0T2LabelHeight   (20.0f)

#define T1LabelFont       (22.0f)
#define T1LabelHeight   (40.0f)

#define T1_FONT_NAME    (@"Arial")


@interface  EXSampleActivityCell()
@property (nonatomic, retain) UIView *infoDisplayView;
@property (nonatomic, retain) UILabel *brandLabel;
@property (nonatomic, retain) UILabel *t0Label;
@property (nonatomic, retain) UILabel *t1Label;
@property (nonatomic, retain) UILabel *t2Label;

- (void)prepareSubView;
- (void)prepareSubViewFrames;
- (void)updateT0T1T2frame;
- (CGSize)getContentLabelSize:(NSString*)content labelFont:(float)font labelHeight:(float)height;

- (void)upDisplayactivity:(BOOL)isTody;
@end

@implementation EXSampleActivityCell

@synthesize activityModel = _activityModel;
@synthesize goodsFaceImageView = _goodsFaceImageView;
@synthesize infoDisplayView = _infoDisplayView;
@synthesize brandLabel = _brandLabel;
@synthesize t0Label = _t0Label;
@synthesize t1Label = _t1Label;
@synthesize t2Label = _t2Label;

- (void)dealloc {
    EX_RELEASE_SAFELY(_goodsFaceImageView);
    EX_RELEASE_SAFELY(_infoDisplayView);
    EX_RELEASE_SAFELY(_brandLabel);
    EX_RELEASE_SAFELY(_t0Label);
    EX_RELEASE_SAFELY(_t1Label);
    EX_RELEASE_SAFELY(_t2Label);
    
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


- (void)setActivityModel:(EXSampleActivityModel *)aActivityModel {
    if (aActivityModel != nil) {
        _goodsFaceImageView.image = nil;
        _brandLabel.text = @"";
        _t0Label.text = @"";
        _t1Label.text = @"";
        _t2Label.text = @"";
        
        _activityModel = aActivityModel;
        
        _goodsFaceImageView.imageKey = aActivityModel.pic;
        _brandLabel.text = [NSString stringWithFormat:@"%@",aActivityModel.activityname];
        _t0Label.text = aActivityModel.t0;
        _t1Label.text = aActivityModel.t1;
        _t2Label.text = aActivityModel.t2;
        
        [self updateT0T1T2frame];
    }
}


#pragma mark - 
#pragma mark - PREPARE_SUB_VIEW
- (void)prepareSubView {
    _goodsFaceImageView = [[EXSampleImageLoadImageView alloc] init];
    _goodsFaceImageView.backgroundColor = [UIColor clearColor]; 
    
    _brandLabel = [[UILabel alloc] init];
    _brandLabel.backgroundColor = [UIColor clearColor];
    _brandLabel.font = [UIFont boldSystemFontOfSize:T0T2LabelFont];
    _brandLabel.textAlignment = UITextAlignmentLeft;
    
    _t0Label = [[UILabel alloc] init];
    _t0Label.backgroundColor = [UIColor clearColor];
    _t0Label.font = [UIFont boldSystemFontOfSize:T0T2LabelFont];
    _t0Label.textAlignment = UITextAlignmentLeft;
    
    _t1Label = [[UILabel alloc] init];
    _t1Label.backgroundColor = [UIColor clearColor];
    _t1Label.textColor = [UIColor colorWithHex:0xd20700];
    _t1Label.font = [UIFont fontWithName:T1_FONT_NAME size:T1LabelFont];
    _t1Label.textAlignment = UITextAlignmentCenter;
    
    _t2Label = [[UILabel alloc] init];
    _t2Label.backgroundColor = [UIColor clearColor];
    _t2Label.font = [UIFont boldSystemFontOfSize:T0T2LabelFont];
    _t2Label.textAlignment = UITextAlignmentLeft;
    
    _infoDisplayView = [[UIView alloc] init];
    _infoDisplayView.backgroundColor = [UIColor whiteColor];
    
    [_infoDisplayView addSubview:_t0Label];
    [_infoDisplayView addSubview:_t1Label];
    [_infoDisplayView addSubview:_t2Label];
    [_infoDisplayView addSubview:_brandLabel];
        
    [self.contentView addSubview:_goodsFaceImageView];
    [self.contentView addSubview:_infoDisplayView];
}


#pragma mark -
#pragma mark - PREPARE_SUB_VIEW_FRAME
- (void)prepareSubViewFrames {
    _goodsFaceImageView.frame = CGRectMake(GOODS_FACE_ORIGN_X, GOODS_FACE_ORIGN_Y, GOODS_FACE_SIZE_W, GOODS_FACE_SIZE_H);
    _infoDisplayView.frame = CGRectMake(0, GOODS_FACE_ORIGN_Y + GOODS_FACE_SIZE_H, 320.0f, CELL_SIZE_H - GOODS_FACE_ORIGN_Y - GOODS_FACE_SIZE_H + 10.0f);
    _brandLabel.frame = CGRectMake(BRAND_LABEL_ORIGN_X, BRAND_LABEL_ORIGN_Y + 3, BRAND_LABEL_SIZE_W, BRAND_LABEL_SIZE_H);
}


- (void)updateT0T1T2frame {
    float totalWidth = 0.0f;
    
    CGSize t0size = [self getContentLabelSize:_t0Label.text
                                    labelFont:T0T2LabelFont
                                  labelHeight:T0T2LabelHeight];
    CGSize t1size = [self getContentLabelSize:_t1Label.text
                                    labelFont:T1LabelFont
                                  labelHeight:T1LabelHeight];
    CGSize t2size = [self getContentLabelSize:_t2Label.text
                                    labelFont:T0T2LabelFont
                                  labelHeight:T0T2LabelHeight];
    
    totalWidth = t0size.width + t1size.width + t2size.width + 10.0f;
    
    float orighY = BRAND_LABEL_SIZE_H + 10.0f;
    
    float t0LabelOrignX = 320.0f - totalWidth;
    _t0Label.frame = CGRectMake(t0LabelOrignX, orighY, t0size.width, t0size.height);
    
    float t1LabelOrignX = t0LabelOrignX + t0size.width;
    _t1Label.frame = CGRectMake(t1LabelOrignX, orighY - 7.0f, t1size.width, t1size.height);
    
    float t2LabelOrignX = t0LabelOrignX + t0size.width + t1size.width;
    _t2Label.frame = CGRectMake(t2LabelOrignX, orighY, t2size.width, t2size.height);
}


#pragma mark -
#pragma mark - LENGTH_TO_LABEL
- (CGSize)getContentLabelSize:(NSString*)content labelFont:(float)font labelHeight:(float)height {
    CGSize size = CGSizeMake(MAXFLOAT,height);
    CGSize labelsize = [content sizeWithFont:[UIFont systemFontOfSize:font] constrainedToSize:size];
	
    return labelsize;
}


#pragma mark -
#pragma mark - UP_DISPLAY
- (void)upDisplayactivity:(BOOL)isTody {
    _infoDisplayView.backgroundColor = [UIColor clearColor];
    
    _brandLabel.textColor = [UIColor blackColor];
    _t0Label.textColor = [UIColor blackColor];
    _t1Label.textColor = [UIColor colorWithHex:0xd20700];
    _t2Label.textColor = [UIColor blackColor];
}


- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath cellForData:(id)data {
    [super tableView:tableView cellForRowAtIndexPath:indexPath cellForData:data];
    
    EXSampleImgLoadCellModel *model1 = data;
    
    EXSampleActivityModel *model = model1.acModel;
    
    [self setActivityModel:model];
    
    id idImg = [model1.bufferTagrtDict objectForKey:model.pic];
    if ([idImg isKindOfClass:[UIImage class]]) {
        self.goodsFaceImageView.image = idImg;
    }
    else {
        self.goodsFaceImageView.image = nil;
    }
}

+ (CGFloat)tableView:(UITableView*)tableView rowHeightForObject:(id)object heightForRowAtIndexPath:(NSIndexPath*)indexPath {
    float cellHeight = 0.0f;
    cellHeight = 288.0f;
    return cellHeight;
}

@end
