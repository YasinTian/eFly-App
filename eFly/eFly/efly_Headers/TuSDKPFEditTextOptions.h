//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPImageResultOptions.h"

@class TuSDKPFEditTextViewOptions;

@interface TuSDKPFEditTextOptions : TuSDKCPImageResultOptions
{
    Class _viewClazz;
    TuSDKPFEditTextViewOptions *_textOptions;
}

@property(retain, nonatomic) TuSDKPFEditTextViewOptions *textOptions; // @synthesize textOptions=_textOptions;
@property(retain, nonatomic) Class viewClazz; // @synthesize viewClazz=_viewClazz;
- (void).cxx_destruct;
- (id)viewController;
- (Class)defaultComponentClazz;
- (void)initOptions;

@end

