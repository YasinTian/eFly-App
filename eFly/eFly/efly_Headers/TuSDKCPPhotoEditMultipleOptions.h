//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPOptions.h"

@class TuSDKPFEditAdjustOptions, TuSDKPFEditApertureOptions, TuSDKPFEditCuterOptions, TuSDKPFEditFilterOptions, TuSDKPFEditHDROptions, TuSDKPFEditHolyLightOptions, TuSDKPFEditMultipleOptions, TuSDKPFEditSharpnessOptions, TuSDKPFEditSkinOptions, TuSDKPFEditSmudgeOptions, TuSDKPFEditStickerOptions, TuSDKPFEditTextOptions, TuSDKPFEditVignetteOptions, TuSDKPFEditWipeAndFilterOptions;

@interface TuSDKCPPhotoEditMultipleOptions : TuSDKCPOptions
{
    TuSDKPFEditMultipleOptions *_editMultipleOptions;
    TuSDKPFEditFilterOptions *_editFilterOptions;
    TuSDKPFEditCuterOptions *_editCuterOptions;
    TuSDKPFEditSkinOptions *_editSkinOptions;
    TuSDKPFEditStickerOptions *_editStickerOptions;
    TuSDKPFEditTextOptions *_editTextOptions;
    TuSDKPFEditAdjustOptions *_editAdjustOptions;
    TuSDKPFEditSharpnessOptions *_editSharpnessOptions;
    TuSDKPFEditApertureOptions *_editApertureOptions;
    TuSDKPFEditVignetteOptions *_editVignetteOptions;
    TuSDKPFEditSmudgeOptions *_editSmudgeOptions;
    TuSDKPFEditWipeAndFilterOptions *_editWipeAndFilterOptions;
    TuSDKPFEditHolyLightOptions *_editHolyLightOptions;
    TuSDKPFEditHDROptions *_editHDROptions;
}

@property(readonly, nonatomic) TuSDKPFEditHDROptions *editHDROptions; // @synthesize editHDROptions=_editHDROptions;
@property(readonly, nonatomic) TuSDKPFEditHolyLightOptions *editHolyLightOptions; // @synthesize editHolyLightOptions=_editHolyLightOptions;
@property(readonly, nonatomic) TuSDKPFEditWipeAndFilterOptions *editWipeAndFilterOptions; // @synthesize editWipeAndFilterOptions=_editWipeAndFilterOptions;
@property(readonly, nonatomic) TuSDKPFEditSmudgeOptions *editSmudgeOptions; // @synthesize editSmudgeOptions=_editSmudgeOptions;
@property(readonly, nonatomic) TuSDKPFEditVignetteOptions *editVignetteOptions; // @synthesize editVignetteOptions=_editVignetteOptions;
@property(readonly, nonatomic) TuSDKPFEditApertureOptions *editApertureOptions; // @synthesize editApertureOptions=_editApertureOptions;
@property(readonly, nonatomic) TuSDKPFEditSharpnessOptions *editSharpnessOptions; // @synthesize editSharpnessOptions=_editSharpnessOptions;
@property(readonly, nonatomic) TuSDKPFEditAdjustOptions *editAdjustOptions; // @synthesize editAdjustOptions=_editAdjustOptions;
@property(readonly, nonatomic) TuSDKPFEditTextOptions *editTextOptions; // @synthesize editTextOptions=_editTextOptions;
@property(readonly, nonatomic) TuSDKPFEditStickerOptions *editStickerOptions; // @synthesize editStickerOptions=_editStickerOptions;
@property(readonly, nonatomic) TuSDKPFEditSkinOptions *editSkinOptions; // @synthesize editSkinOptions=_editSkinOptions;
@property(readonly, nonatomic) TuSDKPFEditCuterOptions *editCuterOptions; // @synthesize editCuterOptions=_editCuterOptions;
@property(readonly, nonatomic) TuSDKPFEditFilterOptions *editFilterOptions; // @synthesize editFilterOptions=_editFilterOptions;
@property(readonly, nonatomic) TuSDKPFEditMultipleOptions *editMultipleOptions; // @synthesize editMultipleOptions=_editMultipleOptions;
- (void).cxx_destruct;
- (void)initOptions;

@end

