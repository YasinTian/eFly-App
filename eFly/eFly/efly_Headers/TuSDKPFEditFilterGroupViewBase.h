//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPGroupFilterBaseView.h"

@class TuSDKFilterWrap;

@interface TuSDKPFEditFilterGroupViewBase : TuSDKCPGroupFilterBaseView
{
    TuSDKFilterWrap *_filter;
}

- (void).cxx_destruct;
- (_Bool)onFilterSelectedWithData:(id)arg1;
- (_Bool)onTuSDKCPGroupFilterBar:(id)arg1 selectedCell:(id)arg2 mode:(id)arg3;
- (void)requestRender;
- (void)handleCancelAction;
- (id)filterArgWithIndex:(unsigned long long)arg1;
- (void)configViewShow:(_Bool)arg1;
- (void)setConfigViewParams:(id)arg1;
- (void)setFilter:(id)arg1;

@end

