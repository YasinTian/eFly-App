//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DDButton, UILabel;

@interface DDOperateView : UIView
{
    int _deviceType;
    CDUnknownBlockType _block;
    DDButton *_operateButton;
    UILabel *_connectionStatusLabel;
    UILabel *_connectHelperLabel;
}

@property(retain, nonatomic) UILabel *connectHelperLabel; // @synthesize connectHelperLabel=_connectHelperLabel;
@property(retain, nonatomic) UILabel *connectionStatusLabel; // @synthesize connectionStatusLabel=_connectionStatusLabel;
@property(retain, nonatomic) DDButton *operateButton; // @synthesize operateButton=_operateButton;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)connectHelper;
- (void)operateButtonClick:(id)arg1;
- (id)howConnectLabel;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
- (void)updateUI:(int)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 deviceType:(int)arg2;

@end

