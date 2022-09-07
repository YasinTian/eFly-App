//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPGroupFilterBaseView.h"

@class UIView;
@protocol TuSDKCPGroupFilterBarInterface, TuSDKCPSubtitlesViewInterface, TuSDKPFNormalFilterGroupDelegate;

@interface TuSDKPFNormalFilterGroupView : TuSDKCPGroupFilterBaseView
{
    UIView<TuSDKCPGroupFilterBarInterface> *_filterBar;
    UIView<TuSDKCPSubtitlesViewInterface> *_titleView;
    id <TuSDKPFNormalFilterGroupDelegate> _delegate;
}

@property(nonatomic) __weak id <TuSDKPFNormalFilterGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)onTuSDKCPGroupFilterBar:(id)arg1 selectedCell:(id)arg2 mode:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)toggleBarShowState;
- (void)setDefaultShowState:(_Bool)arg1;
- (id)titleView;
- (id)filterBar;
- (void)lsqInitView;

@end

