//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKDataJson.h"

@class NSDictionary, NSString, UIColor, UIImage;

@interface TuSDKPFStickerText : TuSDKDataJson
{
    unsigned long long _idt;
    unsigned long long _stickerId;
    unsigned long long _groupId;
    unsigned long long _categoryId;
    long long _type;
    NSString *_text;
    NSDictionary *_textStyleDic;
    UIColor *_color;
    UIColor *_shadowColor;
    double _size;
    long long _alignment;
    UIImage *_textImage;
    struct CGSize _rectSize;
    struct CGRect _rect;
}

+ (id)textWithType:(long long)arg1;
@property(retain, nonatomic) UIImage *textImage; // @synthesize textImage=_textImage;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) struct CGSize rectSize; // @synthesize rectSize=_rectSize;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSDictionary *textStyleDic; // @synthesize textStyleDic=_textStyleDic;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned long long stickerId; // @synthesize stickerId=_stickerId;
@property(nonatomic) unsigned long long idt; // @synthesize idt=_idt;
- (void).cxx_destruct;
- (id)copy;
- (void)deserializationWithJson:(id)arg1;
- (id)initWithTextType:(long long)arg1;

@end
