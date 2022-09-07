//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class Joystick;

@interface JoystickRocker : UIView
{
    Joystick *_joystickLeft;
    Joystick *_joystickRight;
    UIView *_viewLeft;
    UIView *_viewRight;
}

@property(nonatomic) __weak UIView *viewRight; // @synthesize viewRight=_viewRight;
@property(nonatomic) __weak UIView *viewLeft; // @synthesize viewLeft=_viewLeft;
@property(retain, nonatomic) Joystick *joystickRight; // @synthesize joystickRight=_joystickRight;
@property(retain, nonatomic) Joystick *joystickLeft; // @synthesize joystickLeft=_joystickLeft;
- (void).cxx_destruct;
- (void)switchHandWithHandMode:(unsigned long long)arg1;
- (void)awakeFromNib;

@end

