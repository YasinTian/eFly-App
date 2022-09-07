//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKDataJson.h"

@class NSArray, NSMutableArray, NSString, TuSDKStickerPositionInfo, UIImage;

@interface TuSDKPFSticker : TuSDKDataJson
{
    NSMutableArray *_texts;
    unsigned long long _idt;
    unsigned long long _groupId;
    unsigned long long _categoryId;
    NSString *_name;
    NSString *_previewName;
    NSString *_stickerImageName;
    long long _type;
    UIImage *_image;
    TuSDKStickerPositionInfo *_positionInfo;
    struct CGSize _size;
}

+ (id)stickerWithType:(long long)arg1;
+ (id)sticker;
@property(readonly, nonatomic) TuSDKStickerPositionInfo *positionInfo; // @synthesize positionInfo=_positionInfo;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *stickerImageName; // @synthesize stickerImageName=_stickerImageName;
@property(copy, nonatomic) NSString *previewName; // @synthesize previewName=_previewName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned long long idt; // @synthesize idt=_idt;
- (void).cxx_destruct;
- (_Bool)requireFaceFeature;
- (id)stickerTextWithId:(unsigned long long)arg1;
- (id)copy;
- (void)setType:(long long)arg1;
@property(retain, nonatomic) NSArray *texts;
- (void)deserializationWithJson:(id)arg1;

@end
