//
//  ViewController.swift
//  countdownToHour
//
//  Created by Ahmed Elhosseiny on 4/27/18.
//  Copyright © 2018 Ahmed Elhosseiny. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var startButton: UIButton!
    @IBOutlet weak var stopButton: UIButton!
    @IBOutlet weak var timerLabel: UILabel!
    let dateFormat = DateFormatter()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    @IBAction func startTimer() {
//        timerLabel.text = "Start"
    }
    
    @IBAction func stopTimer() {
//        timerLabel.text = "Stop"
    }
    
    
}

