//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPViewController.h"

@class NSString, TuSDKWaterMarkOption;

@interface TuSDKCPResultViewController : TuSDKCPViewController
{
    _Bool _enableShowHub;
    _Bool _saveToTemp;
    _Bool _saveToAlbum;
    _Bool _hasAlbumAccess;
    NSString *_saveToAlbumName;
    double _outputCompress;
    TuSDKWaterMarkOption *_waterMarkOption;
}

@property(readonly, nonatomic) _Bool hasAlbumAccess; // @synthesize hasAlbumAccess=_hasAlbumAccess;
@property(retain, nonatomic) TuSDKWaterMarkOption *waterMarkOption; // @synthesize waterMarkOption=_waterMarkOption;
@property(nonatomic) double outputCompress; // @synthesize outputCompress=_outputCompress;
@property(copy, nonatomic) NSString *saveToAlbumName; // @synthesize saveToAlbumName=_saveToAlbumName;
@property(nonatomic) _Bool saveToAlbum; // @synthesize saveToAlbum=_saveToAlbum;
@property(nonatomic) _Bool saveToTemp; // @synthesize saveToTemp=_saveToTemp;
- (void).cxx_destruct;
- (id)createStickResult:(id)arg1 displaySize:(struct CGSize)arg2 imageSize:(struct CGSize)arg3 defaultTextPosition:(long long)arg4;
- (id)addWaterMarkToImage:(id)arg1;
- (void)saveToAlbumWithResult:(id)arg1;
- (void)saveToTempWithResult:(id)arg1;
- (void)backUIThreadNotifyProcessingWithResult:(id)arg1;
- (void)asyncProcessingIfNeedSave:(id)arg1;
- (_Bool)asyncNotifyProcessingWithResult:(id)arg1;
- (void)notifyProcessingWithResult:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

