//
//  FirstViewController.h
//  iOSApp
//
//  Created by Mehmet Akif DERE on 22.01.2021.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FirstViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *messageTextField;

- (IBAction)sendButton:(UIButton *)sender;


@end

NS_ASSUME_NONNULL_END
