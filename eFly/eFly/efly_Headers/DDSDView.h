//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface DDSDView : UIView
{
    double _freeSpace;
    UIImageView *_infoImageView;
    UILabel *_infoLabel;
}

@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UIImageView *infoImageView; // @synthesize infoImageView=_infoImageView;
@property(nonatomic) double freeSpace; // @synthesize freeSpace=_freeSpace;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

