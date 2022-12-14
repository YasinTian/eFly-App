//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TuSDKPFStickerGroup, UIButton;
@protocol TuSDKPFStickerLocalSectionHeaderProtocol;

@interface TuSDKPFStickerLocalSectionHeader : UIView
{
    UIButton *_titleLabel;
    UIButton *_removeButton;
    TuSDKPFStickerGroup *_group;
    id <TuSDKPFStickerLocalSectionHeaderProtocol> _delegate;
}

@property(nonatomic) id <TuSDKPFStickerLocalSectionHeaderProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TuSDKPFStickerGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(readonly, nonatomic) UIButton *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onDetailAction;
- (void)onRemoveAction;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

