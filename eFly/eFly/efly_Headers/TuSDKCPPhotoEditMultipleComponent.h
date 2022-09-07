//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPPhotoEditMultipleComponentBase.h"

#import "TuSDKCPFilterResultControllerDelegate-Protocol.h"
#import "TuSDKPFEditCuterControllerDelegate-Protocol.h"
#import "TuSDKPFEditFilterControllerDelegate-Protocol.h"
#import "TuSDKPFEditMultipleControllerDelegate-Protocol.h"
#import "TuSDKPFEditSmudgeControllerDelegate-Protocol.h"
#import "TuSDKPFEditStickerControllerDelegate-Protocol.h"
#import "TuSDKPFEditTextControllerDelegate-Protocol.h"
#import "TuSDKPFEditWipeAndFilterControllerDelegate-Protocol.h"

@class NSString, TuSDKCPPhotoEditMultipleOptions, TuSDKPFEditMultipleController;

@interface TuSDKCPPhotoEditMultipleComponent : TuSDKCPPhotoEditMultipleComponentBase <TuSDKPFEditMultipleControllerDelegate, TuSDKPFEditCuterControllerDelegate, TuSDKPFEditFilterControllerDelegate, TuSDKCPFilterResultControllerDelegate, TuSDKPFEditStickerControllerDelegate, TuSDKPFEditSmudgeControllerDelegate, TuSDKPFEditWipeAndFilterControllerDelegate, TuSDKPFEditTextControllerDelegate>
{
    TuSDKCPPhotoEditMultipleOptions *_options;
    TuSDKPFEditMultipleController *_editEntryController;
}

@property(nonatomic) TuSDKPFEditMultipleController *editEntryController; // @synthesize editEntryController=_editEntryController;
@property(retain, nonatomic) TuSDKCPPhotoEditMultipleOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (_Bool)onAsyncTuSDKPFEditWipeAndFilter:(id)arg1 result:(id)arg2;
- (void)onTuSDKPFEditWipeAndFilter:(id)arg1 result:(id)arg2;
- (void)handleWipeFilterButton:(id)arg1;
- (_Bool)onAsyncTuSDKPFEditSmudge:(id)arg1 result:(id)arg2;
- (void)onTuSDKPFEditSmudge:(id)arg1 result:(id)arg2;
- (void)handleSmudgeButton:(id)arg1;
- (void)handleHDRButton:(id)arg1;
- (void)handleHolyLightButton:(id)arg1;
- (void)handleApertureButton:(id)arg1;
- (void)handleVignetteButton:(id)arg1;
- (void)handleSharpnessButton:(id)arg1;
- (void)handleAdjustButton:(id)arg1;
- (void)onTuSDKEditText:(id)arg1 result:(id)arg2;
- (_Bool)onAsyncTuSDKEditText:(id)arg1 result:(id)arg2;
- (void)handleTextButton:(id)arg1;
- (void)onTuSDKEditSticker:(id)arg1 result:(id)arg2;
- (_Bool)onAsyncTuSDKEditSticker:(id)arg1 result:(id)arg2;
- (void)handleStickerButton:(id)arg1;
- (void)onTuSDKFilterResult:(id)arg1 result:(id)arg2;
- (_Bool)onAsyncTuSDKFilterResult:(id)arg1 result:(id)arg2;
- (void)handleSkinButton:(id)arg1;
- (void)onTuSDKPFEditFilter:(id)arg1 result:(id)arg2;
- (_Bool)onAsyncTuSDKPFEditFilter:(id)arg1 result:(id)arg2;
- (void)handleFilterButton:(id)arg1;
- (void)onTuSDKPFEditCuter:(id)arg1 result:(id)arg2;
- (_Bool)onAsyncTuSDKPFEditCuter:(id)arg1 result:(id)arg2;
- (void)handleCutButton:(id)arg1;
- (void)onTuSDKPFEditMultiple:(id)arg1 action:(long long)arg2;
- (void)onTuSDKPFEditMultiple:(id)arg1 result:(id)arg2;
- (void)onActionAsycEdited:(id)arg1;
- (void)onActionAsycEditWithImage:(id)arg1;
- (void)onActionEdited:(id)arg1 result:(id)arg2;
- (void)handleAction:(id)arg1 resultController:(id)arg2;
- (void)handleShowEditEntry;
- (void)showComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

