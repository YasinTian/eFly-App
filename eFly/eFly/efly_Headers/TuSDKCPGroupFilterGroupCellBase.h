//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPGroupFilterItemCellBase.h"

@class UILongPressGestureRecognizer;
@protocol TuSDKCPGroupFilterGroupCellDelegate;

@interface TuSDKCPGroupFilterGroupCellBase : TuSDKCPGroupFilterItemCellBase
{
    UILongPressGestureRecognizer *_longPressGesture;
    id <TuSDKCPGroupFilterGroupCellDelegate> _delegate;
}

@property(nonatomic) __weak id <TuSDKCPGroupFilterGroupCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLongPress:(id)arg1;
- (_Bool)isInActingType;
- (_Bool)canHiddenRemoveFlag;
- (void)viewWillDestory;
- (void)viewNeedRest;

@end

