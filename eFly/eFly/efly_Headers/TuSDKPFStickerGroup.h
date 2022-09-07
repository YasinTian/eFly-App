//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKDataJson.h"

@class NSArray, NSString, TuSDKAOFile;

@interface TuSDKPFStickerGroup : TuSDKDataJson
{
    _Bool _isDownload;
    unsigned long long _idt;
    unsigned long long _categoryId;
    NSString *_file;
    unsigned long long _validType;
    NSString *_validKey;
    NSString *_name;
    NSString *_name_en;
    NSString *_name_language;
    NSString *_previewName;
    NSArray *_stickers;
    TuSDKAOFile *_sdkFile;
}

@property(nonatomic) _Bool isDownload; // @synthesize isDownload=_isDownload;
@property(retain, nonatomic) TuSDKAOFile *sdkFile; // @synthesize sdkFile=_sdkFile;
@property(retain, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(copy, nonatomic) NSString *previewName; // @synthesize previewName=_previewName;
@property(copy, nonatomic) NSString *name_language; // @synthesize name_language=_name_language;
@property(copy, nonatomic) NSString *name_en; // @synthesize name_en=_name_en;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *validKey; // @synthesize validKey=_validKey;
@property(nonatomic) unsigned long long validType; // @synthesize validType=_validType;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(nonatomic) unsigned long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) unsigned long long idt; // @synthesize idt=_idt;
- (void).cxx_destruct;
- (_Bool)requireFaceFeature;
- (id)stickerWithId:(unsigned long long)arg1;
- (id)copy;
- (void)deserializationWithJson:(id)arg1;

@end

