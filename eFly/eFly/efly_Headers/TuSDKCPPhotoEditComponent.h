//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPPhotoEditComponentBase.h"

#import "TuSDKPFEditCuterControllerDelegate-Protocol.h"
#import "TuSDKPFEditEntryControllerDelegate-Protocol.h"
#import "TuSDKPFEditFilterControllerDelegate-Protocol.h"
#import "TuSDKPFStickerLocalControllerDelegate-Protocol.h"

@class NSString, TuSDKCPPhotoEditOptions, TuSDKPFEditEntryController;

@interface TuSDKCPPhotoEditComponent : TuSDKCPPhotoEditComponentBase <TuSDKPFEditEntryControllerDelegate, TuSDKPFEditCuterControllerDelegate, TuSDKPFEditFilterControllerDelegate, TuSDKPFStickerLocalControllerDelegate>
{
    TuSDKCPPhotoEditOptions *_options;
    TuSDKPFEditEntryController *_editEntryController;
}

@property(nonatomic) TuSDKPFEditEntryController *editEntryController; // @synthesize editEntryController=_editEntryController;
@property(retain, nonatomic) TuSDKCPPhotoEditOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)onTuSDKPFStickerLocal:(id)arg1 sticker:(id)arg2;
- (void)handleStickerButton:(id)arg1;
- (void)onTuSDKPFEditFilter:(id)arg1 result:(id)arg2;
- (void)handleFilterButton:(id)arg1;
- (void)onTuSDKPFEditCuter:(id)arg1 result:(id)arg2;
- (void)handleCutButton:(id)arg1;
- (void)onTuSDKPFEditEntry:(id)arg1 action:(long long)arg2;
- (void)onTuSDKPFEditEntry:(id)arg1 result:(id)arg2;
- (void)handleShowEditEntry;
- (void)showComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

