//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKPFEditTextControllerBase.h"

@class TuSDKPFEditTextView, TuSDKPFEditTextViewOptions;
@protocol TuSDKPFEditTextControllerDelegate;

@interface TuSDKPFEditTextController : TuSDKPFEditTextControllerBase
{
    TuSDKPFEditTextView *_defaultStyleView;
    id <TuSDKPFEditTextControllerDelegate> _delegate;
    Class _viewClazz;
    TuSDKPFEditTextViewOptions *_textOptions;
}

@property(readonly, nonatomic) TuSDKPFEditTextView *defaultStyleView; // @synthesize defaultStyleView=_defaultStyleView;
@property(retain, nonatomic) TuSDKPFEditTextViewOptions *textOptions; // @synthesize textOptions=_textOptions;
@property(retain, nonatomic) Class viewClazz; // @synthesize viewClazz=_viewClazz;
@property(nonatomic) __weak id <TuSDKPFEditTextControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyProcessingWithResult:(id)arg1;
- (_Bool)asyncNotifyProcessingWithResult:(id)arg1;
- (void)setOptionViewHiddenState:(_Bool)arg1;
- (void)onOptionSelectedAction:(id)arg1;
- (void)onOptionBackAction;
- (void)loadedInputImage:(id)arg1;
- (void)configDefaultStyleView:(id)arg1;
- (void)buildDefaultStyleView;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (id)textView;
- (id)cutRegionView;

@end

